import QtQuick 2.11
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.3

Rectangle{
    id: button
    height: 50
    width: 100
    color: "yellow"

    Text {
        id: buttonText
        anchors.centerIn: parent
        text: qsTr("Hallo SET")
    }
}
