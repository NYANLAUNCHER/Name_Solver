#pragma once
// Used to describe Name Solver's functions

#include <NS/pch.hpp>
#include "config.hpp"

struct Config cfg;

// Configure Name Solver
void Config(String input) {
    std::cout << "this is the config function\n";
}

// Find an items|databases|dirs
void Find(String input) {
    std::cout << "this is the find function\n";
}

// Add an items|databases|dirs
void Add(String input) {
    std::cout << "this is the add function\n";
}

// Remove items|databases|dirs
void Remove(String input) {
    std::cout << "this is the rm function\n";
}

// Move items|databases|dirs
void Move(String input) {
    std::cout << "this is the rm function\n";
}

// Check for overlap between items|databases|dirs
void Check(String input) {
    std::cout << "this is the check function\n";
}

// List items|databases|dirs
void List(String input) {
    std::cout << "this is the list function\n";
}

// Output helpful text
void Help(String input) {
    std::cout << "this is the help function\n";
    std::ifstream helpfile(cfg.helpFile);

    // output the helpfile
    std::cout << helpfile.rdbuf();
}
