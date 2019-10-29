import QtQuick 2.3

Rectangle{
    id: content
    anchors {left: parent.left; right: parent.right}
    height: column.implicitHeight+5
    border.width: 2
    border.color: "lightsteelblue"
    radius:10
    clip: true
    Behavior on scale {NumberAnimation {easing.type:  Easing.OutQuad}}

    MouseArea{
        anchors.fill: parent
        onPressed: {
            parent.scale =0.9
            image.opacity=1
        }
        onReleased: {
            parent.scale=1.0
//            image.opacity=0.3
        }
    }

    Row{
        spacing: 20
//        Image{
//            id: image
//            source: bild
//            smooth: true
//            opacity: 0.3
//            Behavior on opacity {NumberAnimation {easing.type:  Easing.OutQuad}}
//        }
        Column{
            id: column
            Text { text: 'Vorname: ' + modelData.forename }
            Text { text: 'Nachname: ' + modelData.name }
            Text { text: 'Kurs: ' + modelData.course }
            Text { text: 'Alter: ' + modelData.age }
//            Text { text: 'Model Index: ' + index }
        }
    }
}
