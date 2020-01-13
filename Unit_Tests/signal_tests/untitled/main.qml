import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import com.marius.name 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Name{
        id:name
    }

    TextField {
        id: textField
        x: 238
        y: 201
        width: 86
        height: 40
        text:""
        onTextChanged: name.name=textField.text
    }

    TextField {
        id: textField2
        x: 238
        y: 271
        width: 86
        height: 40
        text: name.name
    }

//    Button{
//        id:setbutton
//        text: "send"
//        onClicked:
//    }
}
