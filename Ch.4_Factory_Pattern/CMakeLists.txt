cmake_minimum_required(VERSION 3.15)
project(Ch_4_Factory_Pattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ch_4_Factory_Pattern

        ChicagoStylePizzaStore.cpp
        ChicagoStylePizzaStore.h
        main.cpp

        NYStylePizzaStore.cpp
        NYStylePizzaStore.h
        Pizza.cpp
        Pizza.h
        PizzaStore.cpp
        PizzaStore.h PizzaIngredientFactory.cpp PizzaIngredientFactory.h Ingredient.cpp Ingredient.h NYPizzaIngredientFactory.cpp NYPizzaIngredientFactory.h ChicagoPizzaIngredientFactory.cpp ChicagoPizzaIngredientFactory.h )
