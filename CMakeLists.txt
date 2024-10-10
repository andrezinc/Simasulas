# Versão mínima requerida do CMake
cmake_minimum_required(VERSION 3.30.3)

# Nome do projeto
project(projeto)

# Definir a versão do C++ utilizada
set(CMAKE_CXX_STANDARD 14.2.1)


# Incluir diretórios de inclusão
include_directories(include)

# Adicionar arquivos de origem e cabeçalhos
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Nome e origem do executável
add_executable(projeto ${SOURCES} ${HEADERS})
