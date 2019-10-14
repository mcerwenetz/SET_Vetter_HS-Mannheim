import QtQuick 2.11
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.3

ApplicationWindow {
    id: mainWindow
    width: 400
    height: 300
    visible: true


    RowLayout {
        id: imageRow
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom * (2/3)
        anchors.topMargin: 10
        Image {
            anchors.fill: parent
            id: hsmannheim
            source: "hs-mannheim.jpg"
        }
    }

    RowLayout {
        id: buttonRow
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top / 3
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10

        MyButton{
            id: button1
            Text {
                id: button1text
                text: qsTr("Button1")
                anchors.centerIn: parent
            }
            anchors.rightMargin: 30
            anchors.right: button2.left
        }
        MyButton{
            id: button2
            anchors.centerIn: parent
            anchors.leftMargin: 30
            Text {
                id: button2text
                text: qsTr("Button2")
                anchors.centerIn: parent
            }

        }
        MyButton{
            id: button3
            anchors.left: button2.right
            anchors.leftMargin: 30
            Text {
                id: button3text
                text: qsTr("Button3")
                anchors.centerIn: parent

            }
        }
    }



}

/*##^##
Designer {
    D{i:0;invisible:true}
}
##^##*/
