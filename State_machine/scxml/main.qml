import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0

Window {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Component.onCompleted: statemachine.running=true


    Button{
        x: 0
        y: 135
        text: "switch states"
        onClicked: (statemachine.an == 1 ? statemachine.submitEvent("ausschalten") : statemachine.submitEvent("anschalten"))
    }

    Text {
        id: running
        x: 295
        y: 60
        text: statemachine.an == 1 ? "maschine ist an" : "maschine ist aus"
    }
}
