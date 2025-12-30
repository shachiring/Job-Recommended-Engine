
🔍 Job Recommendation Engine
A modular C++ engine that maps skills to career paths using Trie-based search, graph traversal, dynamic programming, and freshness filtering.


🚀 Features
🔤 Autocomplete with TrieSearch
🧠 Career path inference via DPPathfinder
🕸️ Skill graph traversal with GraphEngine
🕒 Time-based filtering with FreshnessFilter
🔗 Integrated recommendation pipeline
🧪 Test Suite


Run all tests:
make test-all

Sample output:
Autocomplete for 'Back': Backend Developer
Jobs related to 'Python': ML Engineer
Career path: Python → Intermediate Skill → ML Engineer
Jobs after 2025-11-15: Backend Developer
✅ All tests passed successfully!

📦 Modules
TrieSearch :- Fast prefix-based job lookup 
GraphEngine :- Skill-to-role graph traversal
DPPathfinder :- Optimal career path computation
FreshnessFilter :- Filters outdated job entries


📁 Directory Structure
Job_Recommendation_Engine/
├── src/
├── tests/
├── Makefile
├── README.md


🧠 How It Works
Input: keyword (e.g. "Python")
Output: recommended roles, career paths, and job filters
Integration: modules communicate via shared interfaces

📌 Recruiter Notes
Designed for real-world career-tech applications
Modular, testable, and ATS-friendly documentation
Ideal for showcasing algorithmic and system design skills

🛠️ Build Instructions
make test-all
