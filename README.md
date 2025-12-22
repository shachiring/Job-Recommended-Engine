# Job Recommendation Engine (C++)

## 🚀 Purpose
I built a Job Recommendation Engine in C++ that fixes the flaws of LinkedIn and Indeed by using graph algorithms, tries, heaps, and dynamic programming. It recommends jobs based on actual skills, not just keywords, and shows transparent career paths while filtering out outdated or biased listings.

## 🧠 Key Features
- **Graph Algorithms**: Semantic skill-job mapping
- **Trie Search**: Instant autocomplete for job titles and skills
- **Heap Ranking**: Fair job prioritization by relevance, demand, and salary
- **Dynamic Programming**: Career path optimization
- **Freshness Filter**: Removes outdated/reposted jobs
- **Unified Dashboard**: Aggregates jobs from multiple platforms

## 🏗️ Architecture
## 🛠️ Tech Stack
- **Language**: C++
- **Build System**: Makefile
- **Data Format**: CSV
- **Modules**:
  - `graph_engine.cpp`
  - `trie_search.cpp`
  - `heap_ranker.cpp`
  - `dp_pathfinder.cpp`
  - `freshness_filter.cpp`

## 📂 Folder Structure
## 🧪 How to Build and Run
```bash
make
./job_recommendation_engine

---

Once you've pasted this into your `README.md`, run:

```bash
git add README.md
git commit -m "Update README with full roadmap and features"
git push
