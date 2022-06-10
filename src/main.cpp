
#include <NS/pch.hpp>
#include <NS/include.hpp>
#include "func.hpp"

int main(int argc, char* argv[]) { //Data Base interface
    String funargs;
    for (int i=2; i<argc; i++)
        funargs = funargs + argv[i] + ' ';
    String arg1;
    if (argc > 0)
        arg1 = argv[1];

    if (arg1 == "config")
        Config(funargs);
    else if (arg1 == "find")
        Find(funargs);
    else if (arg1 == "add")
        Add(funargs);
    else if (arg1 == "remove")
        Remove(funargs);
    else if (arg1 == "move")
        Move(funargs);
    else if (arg1 == "check")
        Check(funargs);
    else if (arg1 == "list")
        List(funargs);
    else if (arg1 == "help")
        Help(funargs);
    else
      std::cout <<
        "That is not an excepted command.\n" <<
        "Try, \"ns help\".\n";

    return 0;
}
