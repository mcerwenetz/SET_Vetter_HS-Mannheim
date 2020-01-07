import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle{
        anchors.fill: parent

        Connections{
            target: myThread
            onMyResult: {
                resultText.text = result
            }
        }
        Text {
            id: resultText
        }
    }
}
