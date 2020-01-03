import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import com.example.numberconverter 1.0
import QtQuick.Layouts 1.13


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    //An instance of NumberConverter is needed. Else we are just talking about a type, not an object
    NumberConverter{
        id: numberConverter
    }
    RowLayout{
        x: 210
        y: 136
        Text {
            text: qsTr("bin")
        }
        TextField{
            id: binary_field
            text: numberConverter.bin
            onTextChanged: numberConverter.bin = text
        }
    }
    RowLayout{
        x: 210
        y: 202
        Text {
            text: qsTr("hex")
        }
        TextField{
            id: hex_field
            text: numberConverter.hex
            onTextChanged: numberConverter.hex = text
        }
    }
    RowLayout{
        x: 210
        y: 267
        Text {
            text: qsTr("oct")
        }

        TextField{
            id: oct_field
            x: 0
            y: 77
            text: numberConverter.oct
            onTextChanged: numberConverter.hex = text
        }
    }
    RowLayout{
        x: 210
        y: 329
        Text {
            text: qsTr("dez")
        }
        TextField{
            id: dez_field
            x: 0
            y: 77
            text: numberConverter.oct
            onTextChanged: numberConverter.hex = text
        }
    }
}
