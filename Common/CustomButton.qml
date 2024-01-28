import QtQuick 2.9
import QtQuick.Controls 2.5

Item {
    id: container
    width: 85
    height: 85
    anchors.centerIn: parent

    property int autoStep: 1

    Button {
        id: roundButton
        width: container.width
        height: container.height
        background: Rectangle {
            color: roundButton.pressed ? "#dcdcdc" : "white"
            radius: 10
            border.color: "#CCCCCC"
            border.width: 1
        }
        onClicked:
            {
                if (autoStep >= 0 && autoStep < 3)
                {
                    ++autoStep
                }

                autoStep = ( autoStep=== 3 ) ? 0 : autoStep
            }

        Column {
            anchors.centerIn: parent
            spacing: 7

            Row {
                spacing: 5
                Repeater {
                    model: 3
                    delegate: Rectangle {
                        width: 20
                        height: 10
                        color: autoStep >= index ? "#e5de00" : "#f9f9f9"
                        radius: 3
                        anchors.top: parent.top
                    }
                }   
            }

            Text {
                text: "AUTO"
                color: roundButton.pressed ? "#717D91" : "black"
                font.bold: true
                font.pixelSize: Math.min(roundButton.width * 0.25, roundButton.height * 0.25) + 5
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }
}
