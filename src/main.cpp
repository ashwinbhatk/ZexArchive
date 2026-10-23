#include <iostream>
#include <string_view>

namespace
{
    constexpr std::string_view VERSION = "0.1.0";

    void print_help()
    {
        std::cout
            << "ZexArchive " << VERSION << '\n'
            << "A cross-platform command-line archive utility.\n\n"
            << "Usage:\n"
            << "  zexarchive --help\n"
            << "  zexarchive --version\n";
    }

    void print_version()
    {
        std::cout << "ZexArchive " << VERSION << '\n';
    }
}

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        print_help();
        return 0;
    }

    const std::string_view command{argv[1]};

    if (command == "--help" || command == "-h")
    {
        print_help();
        return 0;
    }

    if (command == "--version" || command == "-v")
    {
        print_version();
        return 0;
    }

    std::cerr << "Error: Unknown option '" << command << "'.\n"
              << "Run 'zexarchive --help' for usage.\n";

    return 1;
}
