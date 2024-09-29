# Contributing Guidelines

I usually follow the following conventions when writing C++ programs (or any competitive programming programs in general):

- **`ans`** is used to store the final answer that will be outputted at the end of the program
- Use **`n`** to represent the number of elements or size of input, commonly for arrays or dynamic programming problems
- Use **`arr`** as the base name for vectors and arrays, such as `int arr[]`
- I prefer using **`for` loops** over `while` loops for iterating over collections, unless there’s a specific need to handle pointers or indices more dynamically
- **Variable naming** should be kept short but meaningful:
  - `i`, `j`, `k` for loop indices
  - `left` and `right` for boundary pointers in two-pointer algorithms
  - `maxVal`, `minVal` for tracking maximum and minimum values in a set

## Code Documentation

All code should be documented to a reasonable extent, especially for complex problems. At minimum, include the following in the problem's accompanying `README` file:

- A brief description, explaining the approach used.
- Explain each major step, particularly when using advanced data structures or algorithms
- Whenever applicable, explain the **time complexity** and **space complexity**

## Folder Structure

The repository is organized by problem difficulty. Each folder has problem subfolders, each of which containing a `README.md` file that briefly describes the problem and its solution. Each subfolder is named via the problem slug (e.g. `hard/maximum-subarray-152/`).

## Code Style

I don't really care about style. Just make sure your code is readable and consistent. Here are some general guidelines:

- Use consistent indentation and spacing
- Keep functions small and focused on a single task
  - If a function grows too large, consider breaking it down into smaller helper functions
- Avoid using global variables unless absolutely necessary

## Submitting a Pull Request

1. Fork the repository.
2. Create a branch for your feature or bug fix.
3. Commit your changes with descriptive messages.
4. Push to your forked repository.
5. Submit a pull request to the main repository.

Please include the following in your pull request:

- Problem name and link to the problem statement
- Brief description of your solution and any optimizations made
- Explanation of edge cases handled
