import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true

    width: Screen.width/2
    height: Screen.height/2


    ListView{
        anchors.fill: parent

        model: MyModel {}
        delegate: MyDel {}
//        delegate: Item{
//            //    anchors.fill: parent
//                Text {
//                    text: name
//                }
//            }
    }
}


