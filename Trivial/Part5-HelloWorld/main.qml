import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        anchors.centerIn: parent
        color: red
        width: 360
        height: 360
        Text {
            anchors.centerIn: parent
            text: qsTr("Hello Marius")
            anchors.verticalCenterOffset: 1
            anchors.horizontalCenterOffset: 1
        }
        MouseArea{
            anchors.fill: parent
            onClicked:
            {
                Qt.quit();
            }
        }
    }
}
