import QtQuick 2.0

Rectangle{
    id:content
    anchors {left: parent.left; right: parent.right}
    height: column.implicitHeight +5
    border.width: 2
    border.color: "blue"
    radius: 10
    clip: true
    MouseArea{
        anchors.fill: parent
        onPressed: parent.scale=0.9;
        onReleased: parent.scale=1.0
    }
    Row{
        spacing: 20
        Column{
            id:column
            Text{text: "Vorname:" +vorname}
            Text{text: "Nachname:" +nachname}
            Text{text: "Beruf:" + beruf}
            Text{text: "Alter:" +alter}
        }
    }
}
