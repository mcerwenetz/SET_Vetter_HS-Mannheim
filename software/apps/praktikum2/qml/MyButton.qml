import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3

Rectangle{
    id: button
    height: 100
    width: 300
    color: "red"
    radius: 25
    signal myClicked( bool aktive )

    property string name : "Button default Name"

    MouseArea{
        anchors.fill: parent
        onClicked: button.myClicked(true)
    }

}
