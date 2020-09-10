// usbhidiocDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CUsbhidiocDlg dialog

// class CUsbhidioc : public CDialog
class CUsbhidioc {
public:
    CUsbhidioc();

    char *GetPK2UnitID();

    bool FindTheHID(int unitIndex);

    bool ReadReport(char *);

    bool WriteReport(char *, unsigned int);

    void CloseReport();

protected:
    void GetDeviceCapabilities();

    void PrepareForOverlappedTransfer();

    char m_UnitID[32];
};
