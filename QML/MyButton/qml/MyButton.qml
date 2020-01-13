import QtQuick 2.11
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.3

Rectangle{
    id: button
    height: 50
    width: 100
    radius: 100
    color: "blue"
    state: "OFF"


    signal myClicked()
    onMyClicked: {
        onMyClicked: console.log("test" + state)
    }

    states: [
        State {
        name: "ON"
        PropertyChanges {
            target: button
            color: "red"
            scale: 0.9
        }
        },
        State{
            name: "OFF"
            PropertyChanges{
                target: button
                color: "blue"
            }
        },
        State {
            name: "Disabled"
            PropertyChanges {
                target: button
                color: "blue"
            }
        }
    ]
    MouseArea{
        anchors.fill: parent
//        onPressed:  button.state="ON";
//        onReleased: button.state="OFF"
        onClicked: {
            parent.state = (button.state=="OFF")?("ON"):("OFF")
            button.myClicked()
        }
    }
   }
