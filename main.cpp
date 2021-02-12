// * choose the port and host of each "server"
// * setup the server_names or not
// * The first server for a host:port will be the default for this host:port (meaning it will answer to all request that doesn’t belong to an other server)
// * setup default error pages
// * limit client body size
// * setup routes with one or multiple of the following rules/configuration (routes wont be using regexp):
// ** define a list of accepted HTTP Methods for the route
// ** define a directory or a file from where the file should be search (for example if url /kapouet is rooted to /tmp/www, url /kapouet/pouic/toto/pouet is //tmp/www/pouic/toto/pouet)
// ** autoindex
// ** default file to answer if the request is a directory
// ** execute CGI based on certain file extension (for example .php)

#include <iostream>
#include <fstream>
#include "Parser.hpp"
int main()
{
	std::string fin_name = "webserv.conf";
	std::ifstream fin(fin_name.c_str());
	Parser parser;
	parser.parse(fin_name);
	std::cout << parser.servers[0].root;
	return 0;
}
