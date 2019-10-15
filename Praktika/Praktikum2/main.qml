import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: root

    Text {
        id: title
        x: 222
        y: 47
        color: "#ca0606"
        text: qsTr("Power Supply")
        font.pointSize: 25
    }
    Row{
        id: voltage_row
        x: 46
        y: 163
        width: 547
        height: 40
        Text {
            id: voltage
            text: qsTr("Voltage:")
        }
        Slider{
            id: voltageslider
            from: 0
            to: 24000
            onValueChanged: {
                powersupply.voltage=value;
            }
        }
        Label{
            text: powersupply.voltage + "mV"
        }
    }
    Row{
        anchors.top: voltage_row.bottom
        anchors.left: voltage_row.left
        width: 547
        height: 40
        id: current_row
        Text {
            id: current
            text: qsTr("Current:")
        }
        Slider{
            id: currentslider
            from: 0
            to: 24000
            onValueChanged: {
                powersupply.current=value;
            }
        }
        Label{
            text: powersupply.current + "mA"
        }
    }
    Row{
        anchors.top: current_row.bottom
        anchors.left: current_row.left
        width: 547
        height: 40
        id: power_limit_row
        Text {
            id: power_limit_text
            text: qsTr("PowerLimit:")
        }
        Slider{
            id: power_limit_slider
            from: 0
            to: 24
            onValueChanged: {
                powersupply.powerlimit = value
            }
        }
        Label{
            text: powersupply.powerlimit + "W"
        }
    }
    Row{
        anchors.top: power_limit_row.bottom
        anchors.left: power_limit_row.left
        width: 547
        height: 40
        id: power_row
        Text {
            id: power
            text: qsTr("Power:")
        }
        Label{
            text: powersupply.power + "W"
        }
    }
    Row{
        id: closebutton_row
        x: 0
        y: 426
        width: 640
        height: 54
        Button{
            anchors.fill: parent
            text: "Close"
            onClicked: Qt.quit();
        }
    }

    Connections{
        target: powersupply
        onVoltageChanged:
        {
            console.log( "Voltage Changed " + powersupply.voltage);
        }
        onCurrentChanged:
        {
            console.log( "Current Changed " + powersupply.current);
        }
        onPowerChanged:
        {
            console.log("Power Changed " + powersupply.power)
        }
        onPowerlimitChanged:
        {
            console.log("Powerlimit Changed " + powersupply.powerlimit)
        }
    }
}

