import QtQuick 2.12
import QtQuick.Window 2.12
//import QtQml.Models 2.14
//import QtQml 2.3



Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: root

        function readFile() {
            var request = new XMLHttpRequest()
            request.open('GET','qrc:/personen.txt')
            request.onreadystatechange = function(event){
                if(request.readyState == XMLHttpRequest.DONE)
                {
                    console.log(request.responseText)
                    view.model = JSON.parse(request.responseText)
                }
            }
            request.send();
        }



    ListView{
        id: view

        anchors {fill: parent; margins: 2}
        delegate: MitarbeiterDelegate {}

        spacing: 4
        cacheBuffer: 50
    }
    Component.onCompleted: {
        root.visible = true
        readFile();
    }
}
