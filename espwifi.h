
//配网模式下需要连接的WIFI
#ifndef STASSID
#define STASSID "XiaoCuiKeJi"
#define STAPSK "Cui123456"
#endif
class espwifi
{
private:
   
public:
   
    espwifi(/* args */);
    ~espwifi();
    void Init(void);
    bool HtmlConfig(void);
    bool AutoConfigWifi(void);
    void BreakOffWifi(void);
    void Recovery(void);
    static void HandleRoot(void);
    static void HandleVal(void);
    static void HandleNotFound(void);
};
