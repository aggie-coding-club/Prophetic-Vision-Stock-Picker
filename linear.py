import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import r2_score

# Placeholder function for linear model
def linear_model_time_series(X, y):
    """
    Fit a time series linear model using input variables and target.

    Parameters:
    X (pd.DataFrame or np.array): Feature matrix including financial variables.
    y (pd.Series or np.array): Target variable (future discounted cash flow).

    Returns:
    dict: Model object and R^2 score on test set.
    """

    # Splitting data into train and test sets (80% train, 20% test)
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, shuffle=False)

    # Fitting a linear model
    model = LinearRegression()
    model.fit(X_train, y_train)

    # Predicting on test set
    y_pred = model.predict(X_test)

    # Calculate R^2 score
    r2 = r2_score(y_test, y_pred)

    return {'model': model, 'r2_score': r2}

# Example usage
if __name__ == "__main__":
    # Example data (time series financial features and discounted cash flow)
    # Replace with actual data for use
    np.random.seed(42)
    X_example = np.random.rand(100, 5)  # 100 time points, 5 financial variables
    y_example = np.random.rand(100)  # 100 future discounted cash flow predictions

    result = linear_model_time_series(X_example, y_example)
    print(f"R^2 Score: {result['r2_score']}")
