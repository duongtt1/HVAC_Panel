import QtQuick 2.9
import "../js/utils.js" as Utils

Rectangle {
    id: tempDisLeft

    property string tempCSymbol: " °C"
    property string tempFSymbol: " °F"
    property int numTemp: 14

    Text {
        id: txtTempNum
        x: 8
        y: 48
        width: 334
        height: 44
        text: qsTr(numTemp + tempCSymbol)
        font.pixelSize: 40
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Image {
        id: chevron
        x: 241
        y: 54
        width: 32
        height: 32
        source: Utils.getUrlImg("chevron.png")
        rotation: 270
        fillMode: Image.PreserveAspectFit
        MouseArea {
            anchors.fill: parent
            onClicked: {
                    if ( numTemp > 26)
                    {
                        // Do nothing
                    }
                    else
                    {
                        numTemp += 1
                    }
            }
        }
    }

    Image {
        id: chevron__1_removebgpreview
        x: 77
        y: 54
        width: 32
        source: Utils.getUrlImg("chevron__1_-removebg-preview.png")
        rotation: 90
        fillMode: Image.PreserveAspectFit
        MouseArea {
            anchors.fill: parent
            onClicked: {
                    if (numTemp < 15)
                    {
                        // Do nothing
                    }
                    else
                    {
                        --numTemp
                    }
            }
        }
    }
}
