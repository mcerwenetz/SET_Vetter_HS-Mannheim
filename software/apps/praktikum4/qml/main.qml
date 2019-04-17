import QtQuick 2.3
import QtQuick.Controls 1.2

ApplicationWindow {
    id: root

    width: 800; height: 600   
    function readFile() {

        var request = new XMLHttpRequest()

        request.open('GET', 'qrc:/Kommilitonen.txt')
        request.onreadystatechange = function(event){


            if (request.readyState === XMLHttpRequest.DONE){
                console.log(request.responseText)
                view.model = JSON.parse( request.responseText)

                }
            }
        request.send();
    }


    ListView{

        id: view

        anchors{fill: parent; margins: 5}

        model: Kommilitonen.txt
        delegate: KommilitonenDelegate {}

        spacing: 25
        cacheBuffer: 50
    }

    Component.onCompleted:{

        root.visible = true
        readFile();
    }


}
