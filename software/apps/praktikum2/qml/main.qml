import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1

Rectangle {
    id: root
    width: 800
    height: 300
    property int counter: 0

    RowLayout{
        anchors.fill: parent

        MyButton{
            id: button1
            onMyClicked: {
                console.log( "button 1 Clicked" )
                root.counter++;
            }
        }

        MyButton{
            id: button2
            onMyClicked: console.log( "button 2 Clicked" )
        }
    }
}
