import QtQuick 2.0

Row{
    id: coursesContent
    Text {
        Text { text: 'Vorname: ' + modelData.modules.name }
        Text { text: 'Vorname: ' + modelData.modules.identificationCode }
        Text { text: 'Vorname: ' + modelData.modules.severity }
        Text { text: 'Vorname: ' + modelData.modules.lernenGroup }
    }
}
