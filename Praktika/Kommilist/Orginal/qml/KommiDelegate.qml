import QtQuick 2.3



Rectangle{
    id: content
    anchors {left: parent.left; right: parent.right}
    height: column.implicitHeight+5
    border.width: 2
    border.color: "lightsteelblue"
    radius:10
    clip: true
    Behavior on scale {NumberAnimation {easing.type:  Easing.OutQuad}}


    function readFile(){
        var request = new XMLHttpRequest()

        request.open('GET', 'qrc:/Kommilitonen.txt')
//        request.overrideMimeType('text/plain; charset=x-user-defined')
        request.onreadystatechange = function(event){

            if(request.readyState === XMLHttpRequest.DONE){
                console.log(request.responseText)
//                view.model = JSON.parse(request.responseText)
                courseView.model = JSON.parse(request.responseText)
            }
        }
        request.send();
    }

    MouseArea{
        anchors.fill: parent
        onPressed: {
            parent.scale =0.9
            image.opacity=1
        }
        onReleased: {
            parent.scale=1.0
            //            image.opacity=0.3
        }
    }

    Row{
        spacing: 20
        //        Image{
        //            id: image
        //            source: bild
        //            smooth: true
        //            opacity: 0.3
        //            Behavior on opacity {NumberAnimation {easing.type:  Easing.OutQuad}}
        //        }
        Column{
            id: column
            Text { text: 'Vorname: ' + modelData.forename }
            Text { text: 'Nachname: ' + modelData.name }
            Text { text: 'Kurs: ' + modelData.course }
            Text { text: 'Alter: ' + modelData.age }
            //            Text { text: 'Model Index: ' + index }
        }
        ListView{
            id: courseView

            anchors { fill: parent; margins: 2 }

            //        model: KommiModel {}
            delegate: CoursesDeligate {}
        }
        Component.onCompleted: {
//            root.visible = true
            readFile();
        }
    }
}
