

class espwifi
{
private:
    /* data */
public:
    espwifi(/* args */);
    ~espwifi();
    void Init(void);
    bool ConnectWifi(void);
    bool AutoConfigWifi(void);
    void BreakOffWifi(void);
    void Recovery(void);
};
