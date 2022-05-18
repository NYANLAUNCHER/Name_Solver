#pragma once
// Manage function arguments

#include <NS/pch.hpp>

struct ArgTree {
    // each item is a function and its flags
    // - the first string is the function
    //  - the rest are the function args
    // - the first item is all the global flags
    std::vector<String> args;

    // put args in the args vector
    void ParseArgs(int argc, char* argv[]) {
    }

    // return the args for a given function
    /// if left blank it returns the global args
    std::vector<String> GetArgs(String func="") {
        std::vector<String> funargs;
        return funargs;
    }

    // return true if a function is in the args vector
    bool CheckFunc(String func) {
        bool exists;
        std::vector<String> funcs;// functions to parse
        return exists;
    }

    // return true if a arg is set within a function
    bool CheckArg(String arg, String func="") {
        bool exists;
        std::vector<String> funcs;// functions to parse
        return exists;
    }
};
