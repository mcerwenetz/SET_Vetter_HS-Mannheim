import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id:rootwin
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        id: roottangle
        color: "red"
        width: rootwin.width
        height: rootwin.height
        Rectangle{
            id:bluerec
//            color: "blue"
            width: roottangle.width/2
            height: roottangle.height/2
            anchors.centerIn: roottangle
            border.color: "#000000"
            border.width: 7
            radius: 20
//            opacity: 0.5
            Text {
                id: hellotext
                text: qsTr("helloworld")
                anchors.centerIn: bluerec
            }
            gradient: Gradient {
                      GradientStop { position: 0.0; color: "lightsteelblue" }
                      GradientStop { position: 1.0; color: "blue" }
                  }
        }
    }
}
