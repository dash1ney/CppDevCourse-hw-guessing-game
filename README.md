# Домашнее задание 'Guessing Game'

[![Build and test](https://github.com/czertyaka/CppDevCourse-hw-guessing-game/actions/workflows/main.yml/badge.svg)](https://github.com/czertyaka/CppDevCourse-hw-guessing-game/actions/workflows/main.yml)

## Выполнение

Добавьте в корневую директорию репозитория файл `main.cpp`.
Требования к программе возьмите из документа с домашним заданием.

## Сборка

Для сборки проекта выполните:

```sh
cmake -B build/
cmake --build build/ -j $(nproc)
```

## Тестирование

Для тестирования проекта выполните:

```sh
python test.py
echo $?
```

Если последняя команда вывела 0, то сборка успешно прошла тестирование.

## Зависимости

Для сборки проекта требуются:
* GNU Make
* Любой C++ компилятор
* CMake

Для тестирования проекта требуются:
* Python
* Модуль Python pexpect

Зависимости можно установить при помощи пакетного менеджера Nix.
[Установите](https://nixos.org/download/) Nix, затем выполните в корневой
директории репозитория:

```sh
nix-shell
```

После выполнения этой команды активируется виртуальное окружение со всеми
перечисленными зависимостями.
