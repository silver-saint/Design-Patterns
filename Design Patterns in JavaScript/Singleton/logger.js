class Logger {
    constructor() {
        if(Logger.instance == null) {
            this.logs = [];
            Logger.instance  = this;
        }
        return Logger.instance;
    }
    logging(msg)  {
    this.logs.push(msg);
    console.log(`Data: ${msg}`);
    }
    printLoggingCounter() {
        console.log(`${this.logs.length}`);
    }
}
const logger = new Logger();
Object.freeze(logger);

export default logger;