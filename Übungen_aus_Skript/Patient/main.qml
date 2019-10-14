import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import patient 1.0

Window {
    visible: true
    width: 640
    height: 480

    Patient{
        id:  patient
        name: "Müller"
    }

    Column{
        anchors.top: parent.top

        Text {
            id: ueberschrift
            text: qsTr("Patient")
            font.pixelSize: 48
        }
        Row{

            Text{
                id: typNameText
                text: "Name"
                color: "blue"
                font.pixelSize: 24
                rightPadding: 10
            }
            Text{
                id: nameText
                text: patient.name;
                color: "blue"
                font.pixelSize: 24
            }

        }
        Row{
            TextArea{
                id: nametoset
            }

            Button{
                id: namechangebutton
                text: "Press me"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        patient.name = nametoset.text
                    }
                }
            }
        }
    }
    Connections {
        target: patient
        onNameChanged:{
            console.log ("Neuer Name " + patient.name);
        }
    }
}
