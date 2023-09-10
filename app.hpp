#include <inery/inery.hpp>
using namespace inery;

class [[inery::contract]] app : public contract{
public :

    using contract::contract;

    app(name reciver, name code, datastream<const char*> ds): 
    contract(reciver, code, ds){}

    TABLE user{
        inery::name username;
        std::string password_hash;
        std::string name;
        std::string phone;
        std::string email;
        std::string adress;

        uint64_t primary_key() const{return username.value;}
    };

    TABLE watch{
        uint64_t id;

        std::string brand;
        std::string model;
        std::string material;
        std::string bracelet;
        std::string movement;
        
        int prodyr;
        double price;
    };

     struct order_item{
        uint64_t watch_id;
        double watch_price;
        double total_price;
    };
    struct order{
        uint64_t id;
        std::string user;
        std::vector <order_item> items;
        time_point order_data;
        time_point expected_delevery_data;
        std::string status;
        double total_price;
        uint64_t primary_key() const { return id;}
    };

    typedef inery::multi_index<"users"_n, app::user> users_t;
    typedef inery::multi_index<"watches"_n, app::watch> watch_t;
    typedef inery::multi_index<"orders"_n, order> order_t;

    [[inery::action]] void signup(inery::name username, std::string name, 
    std::string password_hash, std::string phone, std::string email, std::string adress);


    [[inery::action]] void add(uint64_t id, std::string brand, std::string model, std::string material, std::string bracelet,
     std::string movement, int prodyr, double price);


     };
   

