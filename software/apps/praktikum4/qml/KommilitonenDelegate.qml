import QtQuick 2.0

Rectangle{

            id: content
            anchors{left:parent.left; right: parent.right}
            //height: column.implicitHeight + 5
            height: image.implicitHeight +20
            border.width: 2
            border.color: "green"
            radius: 10
            clip: true
            Behavior on scale{NumberAnimation{easing.type:Easing.Outquand}}


            MouseArea{
                        anchors.fill: parent
                        onPressed:{
                                parent.scale=0.9
                                image.opacity=0.5
                        }
                        onReleased:{
                                parent.scale=1.0
                                image.opacity=0.5
                        }
            }

            Row{
                        spacing:250
                        Image{
                                    id: image //anchors.fill:parent
                                    source: modelData.image
                                    smooth:true
                                    opacity: 0.3
                                    Behavior on scale{NumberAnimation{easing.type:Easing.OutQuad}}

                        }
                        Column{
                                    id:column
                                    Text{text:"Vorname:" + modelData.forename}
                                    Text{text:"Name:" + modelData.name}
                                    Text{text:"Kurse:" + modelData.course}
                                    Text{text:"Alter:" + modelData.age}
                                    Text{text:"Matrikelnummer:" + modelData.matriculationNumber}
                                    Text{text:"Semester:" + modelData.semester}

                        }

                Rectangle{
                    id: modules
                    height: parent.height

                               ListView{
                                id: view2
                                anchors {fill: parent; margins: 2}
                                spacing: 5
                                model: modelData.modules
                                delegate: Component{

                                    Column
                                {
                                    id:column2
                                    Text{text:"Fachname:" + modelData.name + "("+ modelData.identificationCode +")"}
                                    Text{text:"Schwirigkeitsgrad:" + modelData.severity}
                                    Text{text:"Lerngruppe:"+ modelData.lernenGroup}

                        }}}}




}


}
