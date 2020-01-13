import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: root
    Row{
        id: tools
        Button{
            id: clear
            text: "Clear"
            onClicked: {
                var ctx = getContext("2d");
                ctx.reset();
                cavas.requestPaint();
                mouse.clear();            }
        }
        Button{
            id: save
            text: "Save"
            onClicked: {
                mouse.save()
            }
        }

    }
    Canvas{
        id: canvas
        anchors.top: tools.bottom
        width: 500
        height: 500
        property int lastX: 0
        property int lastY: 0

        onPaint: {
            var ctx = getContext("2d")
            ctx.lineWidth = 2
            ctx.strokeStyle = color.red
            ctx.beginPath()
            ctx.moveTo(lastX, lastY)
            lastX = area.mouseX
            lastY = area.mouseY
            ctx.lineTo(lastX, lastY)
            ctx.stroke();

            mouse.test();
            mouse.add(lastX, lastY);
            mouse.add(Qt.point(lastX,lastY));

        }
        MouseArea {
            id:area
            anchors.fill: parent
            onPressed: {
                canvas.lastX=mouseX
                canvas.lastY=mouseY
            }
            onPositionChanged: {
                canvas.requestPaint();
            }
        }
    }
}
