import QtQuick 2.0
import QtQuick.Window 2.0
Item{
    id:rootdel
    width: Screen.width/2
    height: Screen.height/10
    Rectangle{
        width: parent.width
        height: parent.height
        id:baseRec
        color: c

        Text {
            anchors.centerIn: baseRec
            text: name
            font.pixelSize: 22
        }
    }
}
