package com.eclipsesource.v8;


public abstract class V8 implements V8Object {

    public static V8 createV8Isolate() {
        return new V8Impl();
    }

    public abstract int executeIntScript(String script) throws V8ExecutionException, V8ResultUndefined;

    public abstract double executeDoubleScript(String script) throws V8ExecutionException, V8ResultUndefined;

    public abstract String executeStringScript(String script) throws V8ExecutionException, V8ResultUndefined;

    public abstract boolean executeBooleanScript(String script) throws V8ExecutionException, V8ResultUndefined;

    public abstract V8Array executeArrayScript(String script) throws V8ExecutionException, V8ResultUndefined;

    public abstract V8Object executeObjectScript(String script) throws V8ExecutionException, V8ResultUndefined;

    public abstract void executeVoidScript(String script) throws V8ExecutionException;

}
