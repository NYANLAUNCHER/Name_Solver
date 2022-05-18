default:
	g++ src/*.cpp -o bin/main -I include/ -L lib/

buildpch:
	g++ include/NS/pch.hpp
