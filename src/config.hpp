#pragma once
// define configs

#include <NS/pch.hpp>

struct Config {
// Dirs
String homeDir = getenv("HOME");
String runtimeDir = homeDir + "proj/repos/Name_Solver/src/test/";
String configDir = runtimeDir + "config/";
String dbsDir = configDir + "dbs/";
String docDir = runtimeDir + "doc/";

// Files
String helpFile = docDir + "help.txt";
String configFile = configDir + "config.json";
String configBackupFile = configDir + "config.json.bak";
String ruleFile = configDir + "rules.json";// define overlap rules between dbs

// Editor
String editor = getenv("EDITOR");

// Bools
bool hasBackup = true;

// parse a config file
void ParseFile(String file="") {
    if (file == "")
        file = configFile;
}

// write config to a file
void WriteFile(String file="") {
    if (file == "")
        file = configFile;
}
};
