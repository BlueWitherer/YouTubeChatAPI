#include <Geode/Geode.hpp>

using namespace geode::prelude;

static auto mod = Mod::get();

$execute{
    if (mod->hasSavedValue("yt-token") && mod->hasSavedValue("yt-channel")) {
        std::string token = mod->getSavedValue<std::string>("yt-token");
        std::string channel = mod->getSavedValue<std::string>("yt-channel");
    } else {
        log::error("Missing token or channel handle");
    };
};