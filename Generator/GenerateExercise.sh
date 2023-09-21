#!/bin/bash

# Check if the exercise number argument is provided
if [ $# -lt 1 ]; then
    echo "Usage: $0 <exercise_number>"
    exit 1
fi

# Exercise number argument provided
exercise_number="$1"

# Set the parent folder for exercises (one level above your project directory)
parent_folder="../Exercises"

# Get the current year
current_year=$(date +"%y")

# Get the abbreviated, capitalized month name
current_month=$(date +"%b" | tr '[:lower:]' '[:upper:]')

# Get today's date in DD.MM.YY format
current_date=$(date +"%d.%m.%y")

# Define the directory name based on the year, month, and date
year_month_date_directory="Matrices/Exercises/$current_year/$current_month/$current_date"

# Check if the directory exists, create it if needed
if [ ! -d "$year_month_date_directory" ]; then
    echo "Creating directory: $year_month_date_directory"
    mkdir -p "$year_month_date_directory"
fi

# Define the exercise directory based on the exercise number
exercise_directory="$year_month_date_directory/Ex$exercise_number"

# Check if the exercise directory exists, create it if needed
if [ ! -d "$exercise_directory" ]; then
    echo "Creating exercise directory: $exercise_directory"
    mkdir -p "$exercise_directory"
fi

# Define the path to the local template.cpp file
template_path="./Matrices/template.cpp"

# Copy the local template.cpp file to the exercise directory
cp "$template_path" "$exercise_directory/ex${exercise_number}.cpp"

echo "Exercise template copied to: $exercise_directory/ex${exercise_number}.cpp"
