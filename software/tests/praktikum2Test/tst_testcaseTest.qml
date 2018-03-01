import QtQuick 2.0
import QtTest 1.0

Rectangle {
    id: rect
    width: 50; height: 50
    focus: true

    MouseArea {
        id: mouseArea
        property bool wasClicked: false
        anchors.fill: rect
        onClicked: {
            console.log( "Simulated click: " + mouse.x + " " + mouse.y )
            wasClicked = true;
        }
    }

    TestCase {
        name: "KeyClick"
        when: windowShown

        function test_key_click() {
            mouseClick( rect, 10 , 10 );
            verify(mouseArea.wasClicked, "MouseArea was not clicked!");
        }
    }
}
