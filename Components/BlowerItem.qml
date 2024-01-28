import QtQuick 2.0

Item {
    id: blower
    property int blwrStep: 5

    Image {
        id: blwr_down
        x: 67
        y: 30
        width: 32
        source: "images/ventD.png"
        fillMode: Image.PreserveAspectFit
        MouseArea {
            anchors.fill: parent
            onClicked: {
                    if (blwrStep <= 8 && blwrStep > 0)
                        --blwrStep
            }
        }
    }

    Image {
        id: blwr_up
        x: 292
        y: 22
        width: 48
        source: "images/ventD.png"
        fillMode: Image.PreserveAspectFit
        MouseArea {
            anchors.fill: parent
            onClicked: {
               if (blwrStep < 8 && blwrStep >= 0)
                    ++blwrStep
            }
        }
    }
    Text {
        id: blwr_step
        x: 99
        y: 24
        width: 193
        height: 44
        text: blwrStep === 0 ? "OFF" : blwrStep
        font.pixelSize: 40
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
    Row {
        spacing: 5
        x: 40
        y: 90
        Repeater {
            model: 8
            Rectangle {
                width: 35
                height: 10
                color: index > blwrStep-1 ?  "#ffffff" : "#cdffa345"
            }
        }
    }
}
