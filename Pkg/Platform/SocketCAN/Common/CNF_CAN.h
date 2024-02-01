/* Auto-generated file - DO NOT EDIT */
#ifndef CNF_CLASS_CAN_H
#define CNF_CLASS_CAN_H

#include <stdint.h>
#include <memory>
#include <iostream>
#include <chrono>
#include <limits> 
#include <QObject>

#include "../CanDB.h"
#include "Common.h"

#include "Pkg/Models/Blower/BlowerModel.h"
#include "Pkg/Models/Btn/BtnModel.h"
#include "Pkg/Models/SeatMode/SeatModeModel.h"
#include "Pkg/Models/TempSide/TempSideModel.h"

#define DATC11_ID 0x68
#define DATC13_ID 0x67
#define DATC12_ID 0x66
#define DATC14_ID 0x64

#define ARR_MSG_FILTER {  DATC11_ID ,  DATC13_ID ,  DATC12_ID ,  DATC14_ID   }

struct DATC11_SIGNALS
{
    CAN_DATA<uint8_t> CF_Datc_Type;
    CAN_DATA<uint8_t> CF_Datc_VerMaj;
    CAN_DATA<uint8_t> CF_Datc_VerMin;
    CAN_DATA<uint8_t> CR_Datc_OutTempC;
    CAN_DATA<uint8_t> CR_Datc_OutTempF;
    CAN_DATA<uint8_t> CF_Datc_IncarTemp;
};

class DATC11_MSG : public ICAN_MSG
{
    Q_OBJECT
public:
    DATC11_MSG()
    {
        this->id            = 68;
        this->dlc           = 8;
        this->periodTimeMs  = 100;  
        this->status        = CAN_STATUS::eCS_Unknown;
        this->timeoutMs     = this->periodTimeMs * 5;      
        this->lastActivated = std::chrono::steady_clock::now();
    }

    ~DATC11_MSG(){ }

    void unpack(const uint8_t* frame) override {
            _signals.CF_Datc_Type.value = extractSignalValue<decltype(_signals.CF_Datc_Type.value)>(frame, (uint8_t)0, (uint8_t)7);
            _signals.CF_Datc_VerMaj.value = extractSignalValue<decltype(_signals.CF_Datc_VerMaj.value)>(frame, (uint8_t)8, (uint8_t)15);
            _signals.CF_Datc_VerMin.value = extractSignalValue<decltype(_signals.CF_Datc_VerMin.value)>(frame, (uint8_t)16, (uint8_t)23);
            _signals.CR_Datc_OutTempC.value = extractSignalValue<decltype(_signals.CR_Datc_OutTempC.value)>(frame, (uint8_t)24, (uint8_t)31);
            _signals.CR_Datc_OutTempF.value = extractSignalValue<decltype(_signals.CR_Datc_OutTempF.value)>(frame, (uint8_t)32, (uint8_t)39);
            _signals.CF_Datc_IncarTemp.value = extractSignalValue<decltype(_signals.CF_Datc_IncarTemp.value)>(frame, (uint8_t)40, (uint8_t)47);

    }

    CanFrame pack() override
    {
        uint8_t combinedData[CANFD_MAX_DLEN] = {0};  // Assuming MAX_DATA_SIZE is a static constant in CanFrame

        uint8_t* buffer = combinedData;
        copyPropertiesToBuffer(buffer,  _signals.CF_Datc_Type ,   _signals.CF_Datc_VerMaj ,   _signals.CF_Datc_VerMin ,   _signals.CR_Datc_OutTempC ,   _signals.CR_Datc_OutTempF ,   _signals.CF_Datc_IncarTemp   );
        CanFrame combinedFrame(this->id, combinedData, CANFD_MAX_DLEN);

        return combinedFrame;
    }

    canid_t getCanId()
    {
        return this->id;
    }

signals:

private:
    DATC11_SIGNALS  _signals; 
};

struct DATC13_SIGNALS
{
    CAN_DATA<uint8_t> CF_Datc_TempDispUnit;
    CAN_DATA<uint8_t> CF_Datc_ModDisp;
    CAN_DATA<uint8_t> CF_Datc_IonClean;
    CAN_DATA<uint8_t> CF_Datc_ChgReqDisp;
    CAN_DATA<uint8_t> CF_Datc_IntakeDisp;
    CAN_DATA<uint8_t> CF_Datc_AutoDisp;
    CAN_DATA<uint8_t> CF_Datc_FrDefLed;
    CAN_DATA<uint8_t> CF_Datc_AutoDefogBlink;
    CAN_DATA<uint8_t> CF_Datc_ClmScanDisp;
    CAN_DATA<uint8_t> CF_Datc_AqsDisp;
    CAN_DATA<uint8_t> CF_Datc_AcDisp;
    CAN_DATA<uint8_t> CF_Datc_OpSts;
    CAN_DATA<uint8_t> CF_Mtc_MaxAcDisp;
    CAN_DATA<uint8_t> CF_Datc_DualDisp;
    CAN_DATA<uint8_t> CF_Datc_PwrInf;
    CAN_DATA<uint8_t> CF_Datc_RearManual;
    CAN_DATA<uint8_t> CF_Datc_RearAutoDisp;
    CAN_DATA<uint8_t> CF_Datc_RearOffDisp;
    CAN_DATA<uint8_t> CF_Datc_RearClimateScnDisp;
    CAN_DATA<uint8_t> CF_Datc_RearChgReqDisp;
    CAN_DATA<uint8_t> CF_Datc_RearModDisp;
    CAN_DATA<uint8_t> CF_Datc_RearBlwDisp;
    CAN_DATA<uint8_t> CF_Datc_PSModDisp;
    CAN_DATA<uint8_t> CF_Datc_FrontBlwDisp;
};

class DATC13_MSG : public ICAN_MSG
{
    Q_OBJECT
public:
    DATC13_MSG()
    {
        this->id            = 67;
        this->dlc           = 8;
        this->periodTimeMs  = 100;  
        this->status        = CAN_STATUS::eCS_Unknown;
        this->timeoutMs     = this->periodTimeMs * 5;      
        this->lastActivated = std::chrono::steady_clock::now();
    }

    ~DATC13_MSG(){ }

    void unpack(const uint8_t* frame) override {
            _signals.CF_Datc_TempDispUnit.value = extractSignalValue<decltype(_signals.CF_Datc_TempDispUnit.value)>(frame, (uint8_t)0, (uint8_t)1);
            _signals.CF_Datc_ModDisp.value = extractSignalValue<decltype(_signals.CF_Datc_ModDisp.value)>(frame, (uint8_t)2, (uint8_t)5);
            _signals.CF_Datc_IonClean.value = extractSignalValue<decltype(_signals.CF_Datc_IonClean.value)>(frame, (uint8_t)6, (uint8_t)7);
            _signals.CF_Datc_ChgReqDisp.value = extractSignalValue<decltype(_signals.CF_Datc_ChgReqDisp.value)>(frame, (uint8_t)8, (uint8_t)9);
            _signals.CF_Datc_IntakeDisp.value = extractSignalValue<decltype(_signals.CF_Datc_IntakeDisp.value)>(frame, (uint8_t)10, (uint8_t)11);
            _signals.CF_Datc_AutoDisp.value = extractSignalValue<decltype(_signals.CF_Datc_AutoDisp.value)>(frame, (uint8_t)12, (uint8_t)13);
            _signals.CF_Datc_FrDefLed.value = extractSignalValue<decltype(_signals.CF_Datc_FrDefLed.value)>(frame, (uint8_t)14, (uint8_t)15);
            _signals.CF_Datc_AutoDefogBlink.value = extractSignalValue<decltype(_signals.CF_Datc_AutoDefogBlink.value)>(frame, (uint8_t)16, (uint8_t)17);
            _signals.CF_Datc_ClmScanDisp.value = extractSignalValue<decltype(_signals.CF_Datc_ClmScanDisp.value)>(frame, (uint8_t)18, (uint8_t)19);
            _signals.CF_Datc_AqsDisp.value = extractSignalValue<decltype(_signals.CF_Datc_AqsDisp.value)>(frame, (uint8_t)20, (uint8_t)21);
            _signals.CF_Datc_AcDisp.value = extractSignalValue<decltype(_signals.CF_Datc_AcDisp.value)>(frame, (uint8_t)22, (uint8_t)23);
            _signals.CF_Datc_OpSts.value = extractSignalValue<decltype(_signals.CF_Datc_OpSts.value)>(frame, (uint8_t)25, (uint8_t)27);
            _signals.CF_Mtc_MaxAcDisp.value = extractSignalValue<decltype(_signals.CF_Mtc_MaxAcDisp.value)>(frame, (uint8_t)28, (uint8_t)29);
            _signals.CF_Datc_DualDisp.value = extractSignalValue<decltype(_signals.CF_Datc_DualDisp.value)>(frame, (uint8_t)30, (uint8_t)31);
            _signals.CF_Datc_PwrInf.value = extractSignalValue<decltype(_signals.CF_Datc_PwrInf.value)>(frame, (uint8_t)32, (uint8_t)35);
            _signals.CF_Datc_RearManual.value = extractSignalValue<decltype(_signals.CF_Datc_RearManual.value)>(frame, (uint8_t)38, (uint8_t)39);
            _signals.CF_Datc_RearAutoDisp.value = extractSignalValue<decltype(_signals.CF_Datc_RearAutoDisp.value)>(frame, (uint8_t)40, (uint8_t)41);
            _signals.CF_Datc_RearOffDisp.value = extractSignalValue<decltype(_signals.CF_Datc_RearOffDisp.value)>(frame, (uint8_t)42, (uint8_t)43);
            _signals.CF_Datc_RearClimateScnDisp.value = extractSignalValue<decltype(_signals.CF_Datc_RearClimateScnDisp.value)>(frame, (uint8_t)44, (uint8_t)45);
            _signals.CF_Datc_RearChgReqDisp.value = extractSignalValue<decltype(_signals.CF_Datc_RearChgReqDisp.value)>(frame, (uint8_t)46, (uint8_t)47);
            _signals.CF_Datc_RearModDisp.value = extractSignalValue<decltype(_signals.CF_Datc_RearModDisp.value)>(frame, (uint8_t)48, (uint8_t)51);
            _signals.CF_Datc_RearBlwDisp.value = extractSignalValue<decltype(_signals.CF_Datc_RearBlwDisp.value)>(frame, (uint8_t)52, (uint8_t)55);
            _signals.CF_Datc_PSModDisp.value = extractSignalValue<decltype(_signals.CF_Datc_PSModDisp.value)>(frame, (uint8_t)56, (uint8_t)59);
            _signals.CF_Datc_FrontBlwDisp.value = extractSignalValue<decltype(_signals.CF_Datc_FrontBlwDisp.value)>(frame, (uint8_t)60, (uint8_t)63);

            emit CF_Datc_TempDispUnitChanged(_signals.CF_Datc_TempDispUnit.value);
            emit CF_Datc_ModDispChanged(_signals.CF_Datc_ModDisp.value);
            emit CF_Datc_PSModDispChanged(_signals.CF_Datc_PSModDisp.value);
            emit CF_Datc_FrontBlwDispChanged(_signals.CF_Datc_FrontBlwDisp.value);
    }

    CanFrame pack() override
    {
        uint8_t combinedData[CANFD_MAX_DLEN] = {0};  // Assuming MAX_DATA_SIZE is a static constant in CanFrame

        uint8_t* buffer = combinedData;
        copyPropertiesToBuffer(buffer,  _signals.CF_Datc_TempDispUnit ,   _signals.CF_Datc_ModDisp ,   _signals.CF_Datc_IonClean ,   _signals.CF_Datc_ChgReqDisp ,   _signals.CF_Datc_IntakeDisp ,   _signals.CF_Datc_AutoDisp ,   _signals.CF_Datc_FrDefLed ,   _signals.CF_Datc_AutoDefogBlink ,   _signals.CF_Datc_ClmScanDisp ,   _signals.CF_Datc_AqsDisp ,   _signals.CF_Datc_AcDisp ,   _signals.CF_Datc_OpSts ,   _signals.CF_Mtc_MaxAcDisp ,   _signals.CF_Datc_DualDisp ,   _signals.CF_Datc_PwrInf ,   _signals.CF_Datc_RearManual ,   _signals.CF_Datc_RearAutoDisp ,   _signals.CF_Datc_RearOffDisp ,   _signals.CF_Datc_RearClimateScnDisp ,   _signals.CF_Datc_RearChgReqDisp ,   _signals.CF_Datc_RearModDisp ,   _signals.CF_Datc_RearBlwDisp ,   _signals.CF_Datc_PSModDisp ,   _signals.CF_Datc_FrontBlwDisp   );
        CanFrame combinedFrame(this->id, combinedData, CANFD_MAX_DLEN);

        return combinedFrame;
    }

    canid_t getCanId()
    {
        return this->id;
    }

signals:
    void CF_Datc_TempDispUnitChanged(uint8_t value);
    void CF_Datc_ModDispChanged(uint8_t value);
    void CF_Datc_PSModDispChanged(uint8_t value);
    void CF_Datc_FrontBlwDispChanged(uint8_t value);

private:
    DATC13_SIGNALS  _signals; 
};

struct DATC12_SIGNALS
{
    CAN_DATA<uint8_t> CR_Datc_DrTempDispC;
    CAN_DATA<uint8_t> CR_Datc_DrTempDispF;
    CAN_DATA<uint8_t> CR_Datc_PsTempDispC;
    CAN_DATA<uint8_t> CR_Datc_PsTempDispF;
    CAN_DATA<uint8_t> CR_Datc_RearDrTempDispC;
    CAN_DATA<uint8_t> CR_Datc_RearDrTempDispF;
    CAN_DATA<uint8_t> CF_Datc_CO2_Warning;
};

class DATC12_MSG : public ICAN_MSG
{
    Q_OBJECT
public:
    DATC12_MSG()
    {
        this->id            = 66;
        this->dlc           = 8;
        this->periodTimeMs  = 100;  
        this->status        = CAN_STATUS::eCS_Unknown;
        this->timeoutMs     = this->periodTimeMs * 5;      
        this->lastActivated = std::chrono::steady_clock::now();
    }

    ~DATC12_MSG(){ }

    void unpack(const uint8_t* frame) override {
            _signals.CR_Datc_DrTempDispC.value = extractSignalValue<decltype(_signals.CR_Datc_DrTempDispC.value)>(frame, (uint8_t)0, (uint8_t)7);
            _signals.CR_Datc_DrTempDispF.value = extractSignalValue<decltype(_signals.CR_Datc_DrTempDispF.value)>(frame, (uint8_t)8, (uint8_t)15);
            _signals.CR_Datc_PsTempDispC.value = extractSignalValue<decltype(_signals.CR_Datc_PsTempDispC.value)>(frame, (uint8_t)16, (uint8_t)23);
            _signals.CR_Datc_PsTempDispF.value = extractSignalValue<decltype(_signals.CR_Datc_PsTempDispF.value)>(frame, (uint8_t)24, (uint8_t)31);
            _signals.CR_Datc_RearDrTempDispC.value = extractSignalValue<decltype(_signals.CR_Datc_RearDrTempDispC.value)>(frame, (uint8_t)40, (uint8_t)47);
            _signals.CR_Datc_RearDrTempDispF.value = extractSignalValue<decltype(_signals.CR_Datc_RearDrTempDispF.value)>(frame, (uint8_t)48, (uint8_t)55);
            _signals.CF_Datc_CO2_Warning.value = extractSignalValue<decltype(_signals.CF_Datc_CO2_Warning.value)>(frame, (uint8_t)56, (uint8_t)63);

            emit CR_Datc_DrTempDispCChanged(_signals.CR_Datc_DrTempDispC.value);
            emit CR_Datc_DrTempDispFChanged(_signals.CR_Datc_DrTempDispF.value);
            emit CR_Datc_PsTempDispCChanged(_signals.CR_Datc_PsTempDispC.value);
            emit CR_Datc_PsTempDispFChanged(_signals.CR_Datc_PsTempDispF.value);
            emit CR_Datc_RearDrTempDispCChanged(_signals.CR_Datc_RearDrTempDispC.value);
            emit CR_Datc_RearDrTempDispFChanged(_signals.CR_Datc_RearDrTempDispF.value);
    }

    CanFrame pack() override
    {
        uint8_t combinedData[CANFD_MAX_DLEN] = {0};  // Assuming MAX_DATA_SIZE is a static constant in CanFrame

        uint8_t* buffer = combinedData;
        copyPropertiesToBuffer(buffer,  _signals.CR_Datc_DrTempDispC ,   _signals.CR_Datc_DrTempDispF ,   _signals.CR_Datc_PsTempDispC ,   _signals.CR_Datc_PsTempDispF ,   _signals.CR_Datc_RearDrTempDispC ,   _signals.CR_Datc_RearDrTempDispF ,   _signals.CF_Datc_CO2_Warning   );
        CanFrame combinedFrame(this->id, combinedData, CANFD_MAX_DLEN);

        return combinedFrame;
    }

    canid_t getCanId()
    {
        return this->id;
    }

signals:
    void CR_Datc_DrTempDispCChanged(uint8_t value);
    void CR_Datc_DrTempDispFChanged(uint8_t value);
    void CR_Datc_PsTempDispCChanged(uint8_t value);
    void CR_Datc_PsTempDispFChanged(uint8_t value);
    void CR_Datc_RearDrTempDispCChanged(uint8_t value);
    void CR_Datc_RearDrTempDispFChanged(uint8_t value);

private:
    DATC12_SIGNALS  _signals; 
};

struct DATC14_SIGNALS
{
    CAN_DATA<uint8_t> CF_Datc_AqsLevelOut;
    CAN_DATA<uint8_t> CF_Datc_DiagMode;
    CAN_DATA<uint8_t> CR_Datc_SelfDiagCode;
    CAN_DATA<uint8_t> DATC_SyncDisp;
    CAN_DATA<uint8_t> DATC_OffDisp;
    CAN_DATA<uint8_t> DATC_SmartVentDisp;
    CAN_DATA<uint8_t> DATC_SmartVentOnOffStatus;
    CAN_DATA<uint8_t> DATC_AutoDefogSysOff_Disp;
    CAN_DATA<uint8_t> DATC_ADSDisp;
};

class DATC14_MSG : public ICAN_MSG
{
    Q_OBJECT
public:
    DATC14_MSG()
    {
        this->id            = 64;
        this->dlc           = 8;
        this->periodTimeMs  = 100;  
        this->status        = CAN_STATUS::eCS_Unknown;
        this->timeoutMs     = this->periodTimeMs * 5;      
        this->lastActivated = std::chrono::steady_clock::now();
    }

    ~DATC14_MSG(){ }

    void unpack(const uint8_t* frame) override {
            _signals.CF_Datc_AqsLevelOut.value = extractSignalValue<decltype(_signals.CF_Datc_AqsLevelOut.value)>(frame, (uint8_t)0, (uint8_t)3);
            _signals.CF_Datc_DiagMode.value = extractSignalValue<decltype(_signals.CF_Datc_DiagMode.value)>(frame, (uint8_t)6, (uint8_t)7);
            _signals.CR_Datc_SelfDiagCode.value = extractSignalValue<decltype(_signals.CR_Datc_SelfDiagCode.value)>(frame, (uint8_t)8, (uint8_t)15);
            _signals.DATC_SyncDisp.value = extractSignalValue<decltype(_signals.DATC_SyncDisp.value)>(frame, (uint8_t)16, (uint8_t)19);
            _signals.DATC_OffDisp.value = extractSignalValue<decltype(_signals.DATC_OffDisp.value)>(frame, (uint8_t)20, (uint8_t)21);
            _signals.DATC_SmartVentDisp.value = extractSignalValue<decltype(_signals.DATC_SmartVentDisp.value)>(frame, (uint8_t)22, (uint8_t)23);
            _signals.DATC_SmartVentOnOffStatus.value = extractSignalValue<decltype(_signals.DATC_SmartVentOnOffStatus.value)>(frame, (uint8_t)24, (uint8_t)25);
            _signals.DATC_AutoDefogSysOff_Disp.value = extractSignalValue<decltype(_signals.DATC_AutoDefogSysOff_Disp.value)>(frame, (uint8_t)26, (uint8_t)27);
            _signals.DATC_ADSDisp.value = extractSignalValue<decltype(_signals.DATC_ADSDisp.value)>(frame, (uint8_t)28, (uint8_t)29);

    }

    CanFrame pack() override
    {
        uint8_t combinedData[CANFD_MAX_DLEN] = {0};  // Assuming MAX_DATA_SIZE is a static constant in CanFrame

        uint8_t* buffer = combinedData;
        copyPropertiesToBuffer(buffer,  _signals.CF_Datc_AqsLevelOut ,   _signals.CF_Datc_DiagMode ,   _signals.CR_Datc_SelfDiagCode ,   _signals.DATC_SyncDisp ,   _signals.DATC_OffDisp ,   _signals.DATC_SmartVentDisp ,   _signals.DATC_SmartVentOnOffStatus ,   _signals.DATC_AutoDefogSysOff_Disp ,   _signals.DATC_ADSDisp   );
        CanFrame combinedFrame(this->id, combinedData, CANFD_MAX_DLEN);

        return combinedFrame;
    }

    canid_t getCanId()
    {
        return this->id;
    }

signals:

private:
    DATC14_SIGNALS  _signals; 
};


class CFGCAN
{
private:
    CFGCAN() {}  

public:
    static CFGCAN& getInstance()
    {
        static CFGCAN instance;  
        return instance;
    }

    void initRx()
    {
            std::shared_ptr<DATC11_MSG> DATC11_OBJ = std::make_shared<DATC11_MSG>();
            CanDB::getInstance().setRxCanMessage(DATC11_OBJ->getCanId(), DATC11_OBJ);
            std::shared_ptr<DATC13_MSG> DATC13_OBJ = std::make_shared<DATC13_MSG>();
            CanDB::getInstance().setRxCanMessage(DATC13_OBJ->getCanId(), DATC13_OBJ);
            std::shared_ptr<DATC12_MSG> DATC12_OBJ = std::make_shared<DATC12_MSG>();
            CanDB::getInstance().setRxCanMessage(DATC12_OBJ->getCanId(), DATC12_OBJ);
            std::shared_ptr<DATC14_MSG> DATC14_OBJ = std::make_shared<DATC14_MSG>();
            CanDB::getInstance().setRxCanMessage(DATC14_OBJ->getCanId(), DATC14_OBJ);
    }

    void initTx()
    {
        // Your existing code for initTx
    }

    CFGCAN(const CFGCAN&) = delete;  // Delete copy constructor
    void operator=(const CFGCAN&) = delete;  // Delete assignment operator
    ~CFGCAN() {}
};

#endif