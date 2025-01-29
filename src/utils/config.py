import os
from dotenv import load_dotenv

load_dotenv()

class Config:
    VECTOR_DB = os.getenv("VECTOR_DB", "chroma")
    DATABASE_URL = os.getenv("DATABASE_URL", "mongodb://localhost:27017")
    LLM_API_KEY = os.getenv("LLM_API_KEY", "your-api-key")

config = Config()
