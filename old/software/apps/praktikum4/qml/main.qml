import QtQuick 2.3
import QtQuick.Controls 1.2
//import "KommiModel.qml"
//import "KommiDelegate.qml"


ApplicationWindow {
    id: root
    visible: true
    width: 800; height: 600

    function readFile(){
        var request = new XMLHttpRequest()

        request.open('GET', 'qrc:/Kommilitonen.txt')
        request.overrideMimeType('text/plain; charset=x-user-defined')
        request.onreadystatechange = function(event){
            if(request.readyState == XMLHttpRequest.DONE){
                console.log(request.responseText)
                view.model = JSON.parse(request.responseText)
            }
        }
    }
    
    ListView{
        id: view

        anchors { fill: parent; margins: 2 }

        model: KommiModel {}
        delegate: KommiDelegate {}

        spacing: 4
        cacheBuffer: 50
    }
//    Component.onCompleted: {
//        root.visible = true
//        readFile();
//    }
}
