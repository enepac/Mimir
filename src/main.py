from fastapi import FastAPI, HTTPException
from src.utils.logger import get_logger
from src.core.codebase_ingestion import CodebaseIngestion

app = FastAPI()
logger = get_logger("AI Assistant")

@app.get("/")
def read_root():
    logger.info("Root endpoint hit")
    return {"message": "Welcome to the AI Coding Assistant!"}

@app.post("/index-codebase")
def index_codebase(directory: str):
    try:
        ingestor = CodebaseIngestion(directory)
        ingestor.index_codebase()
        return {"message": "Codebase indexed successfully"}
    except Exception as e:
        logger.error(f"Error during codebase indexing: {e}")
        raise HTTPException(status_code=500, detail="Failed to index codebase.")
