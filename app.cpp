#include "app.hpp"

void app::signup(inery::name username, std::string name, std::string password_hash, std::string phone, 
std::string email, std::string adress){
    require_auth(get_self());
    //autorizacija vlasnika kontrakta

    users_t users(get_self(), get_self().value);
    //unos korisnika sa njihovim parametrima code i scope
    //  IME TABELE SE ZAPRAVO DAJE OVDE (USERS) NE U HPP-u

    users.emplace(get_self(), [&](user &user){
        user.username = username;
        user.name = name;
        user.password_hash = password_hash;
        user.phone = phone;
        user.email = email;
        user.adress = adress;
    });

  

}

  void app::add(uint64_t id, std::string brand, std::string model, std::string material, std::string bracelet,
     std::string movement, int prodyr, double price){

        watches_t watches();

        watches.emplace({
            watch.id = id;
            watch.brand = brand;
            watch.model = model;
            watch.material = material;
            watch.bracelet = bracelet;
            watch.movement = movement;
            watch.prodyr = prodyr;
            watch.price = price;
        });
     }

