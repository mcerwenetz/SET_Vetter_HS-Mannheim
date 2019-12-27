import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: root

    ListView{
        id: view

        anchors {fill: parent; margins: 2}
        //model: MitarbeiterModel {}
        model: [{
                vorname: "Hans",
                nachname: "Peter",
                beruf: "Bäcker",
                alter: "10",
            },
            {
                vorname: "Reiner",
                nachname: "Winkler",
                beruf: "Metzger",
                alter: "30"
            }]
        delegate: MitarbeiterDelegate {}

        spacing: 4
        cacheBuffer: 50
    }
}
